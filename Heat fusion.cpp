#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    // Grid size
    const int Nx = 20;
    const int Ny = 20;
    const int Nt = 500;

    // Physical parameters
    double alpha = 0.01;      // Thermal diffusivity
    double dx = 1.0;
    double dy = 1.0;
    double dt = 0.1;

    // Temperature fields
    vector<vector<double>> u(Nx, vector<double>(Ny, 0.0));
    vector<vector<double>> u_new(Nx, vector<double>(Ny, 0.0));

    // Initial condition (hot center)
    u[Nx/2][Ny/2] = 100.0;

    // Time loop
    for (int t = 0; t < Nt; t++) {

        for (int i = 1; i < Nx - 1; i++) {
            for (int j = 1; j < Ny - 1; j++) {

                u_new[i][j] = u[i][j] + alpha * dt * (
                    (u[i+1][j] - 2*u[i][j] + u[i-1][j]) / (dx*dx) +
                    (u[i][j+1] - 2*u[i][j] + u[i][j-1]) / (dy*dy)
                );
            }
        }

        // Update solution
        u = u_new;
    }

    // Output final temperature field
    for (int i = 0; i < Nx; i++) {
        for (int j = 0; j < Ny; j++) {
            cout << u[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
