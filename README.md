# High Performance Computing Repo

Revive my 3 years experience in HPC: Parallel, GPU computing, and Heterogeneous (Hybrid) programming. Running some basic scripts, messages and configs.

## Before installing

update `brew`
`brew update`

if encountered error:

`cd /usr/local/`

`git reset --hard && git clean -df`

`brew doctor`

`brew update`

## OpenMP
`brew update`
`brew reinstall gcc --without-multilib`

Compile with: `g++-6 filename.cpp -fopenmp`

## Open-MPI
`brew install open-mpi`

On **MacOS Sierra**, `mpirun` is known to break down on initialization, see [this ticket](https://www.open-mpi.org/faq/?category=osx#startup-errors-with-open-mpi-2.0.x)

In that case run with ENV VAR temporarily changed:
`TMPDIR=/tmp mpirun -np 4 ./executable`
