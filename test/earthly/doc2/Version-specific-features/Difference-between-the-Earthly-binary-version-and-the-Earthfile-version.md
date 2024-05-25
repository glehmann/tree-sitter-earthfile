## Difference between the Earthly binary version and the Earthfile version

Earthly binary versions and Earthfile versions (declared via `VERSION`) follow the same minor versioning milestones, but are not the same.

The Earthly binary is able to run some older Earthfiles, but newer Earthfiles are not able to run on older Earthly binaries. The table below shows the compatibility matrix:

| Earthly binary version | Supported Earthfile VERSIONs |
|------------------------|--------------------------------|
| 0.8.x | `VERSION 0.6`, `VERSION 0.7`, `VERSION 0.8` |
| 0.7.x | `VERSION 0.5`, `VERSION 0.6`, `VERSION 0.7` |
| 0.6.x | No version specified (0.5 implied), `VERSION 0.5`, `VERSION 0.6` |
| 0.5.x | No version specified (0.5 implied), `VERSION 0.5` |
| <0.5.x | `VERSION` not supported |

