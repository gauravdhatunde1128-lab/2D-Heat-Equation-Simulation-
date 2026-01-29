# 2D-Heat-Equation-Simulation-
This project simulates 2D heat diffusion on a square grid using the finite difference method (FDM) and an explicit time-marching scheme. A hot spot is placed at the center of the grid, and the temperature spreads over time according to the heat equation.
📐 Mathematical Model
Governing equation (2D Heat Equation):
Discretized using:
Central difference in space
Forward difference in time (Explicit method)
⚙️ Numerical Method Used
Finite Difference Method (FDM)
Explicit Time Integration
5-point stencil for Laplacian
🧮 Simulation Parameters
Grid size: 20 × 20
Time steps: 500
Thermal diffusivity (α): 0.01
Spatial step:
dx = 1.0
dy = 1.0
Time step: dt = 0.1
🌡️ Initial & Boundary Conditions
Initial Condition:
Temperature = 100 at grid center
Temperature = 0 elsewhere
Boundary Condition:
Fixed (Dirichlet) boundary
Boundary temperature remains 0
🖥️ Implementation Details
Language: C++
Uses:
vector for 2D grid storage
Nested loops for spatial iteration
Two arrays:
u → current temperature field
u_new → updated temperature field
