#include "babylon/environment.h"

#if BABYLON_USE_PROTOBUF

#include "google/protobuf/message.h"
#if GOOGLE_PROTOBUF_VERSION >= 5027000 && GOOGLE_PROTOBUF_VERSION < 5028000
#include "arena.27.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 4025000 && GOOGLE_PROTOBUF_VERSION < 4026000
#include "arena.25.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 4022000 && GOOGLE_PROTOBUF_VERSION < 4023000
#include "arena.22.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3021000 && GOOGLE_PROTOBUF_VERSION < 3022000
#include "arena.21.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3019000 && GOOGLE_PROTOBUF_VERSION < 3020000
#include "arena.3.19.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3018000 && GOOGLE_PROTOBUF_VERSION < 3019000
#include "arena.3.18.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3017000 && GOOGLE_PROTOBUF_VERSION < 3018000
#include "arena.3.17.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3013000 && GOOGLE_PROTOBUF_VERSION < 3014000
#include "arena.3.13.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3010000 && GOOGLE_PROTOBUF_VERSION < 3011000
#include "arena.3.10.0.inc"
#elif GOOGLE_PROTOBUF_VERSION >= 3006000 && GOOGLE_PROTOBUF_VERSION < 3007000
#include "arena.3.6.0.inc"
#endif

#endif // BABYLON_USE_PROTOBUF
