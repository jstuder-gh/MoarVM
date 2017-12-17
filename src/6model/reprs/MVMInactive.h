/* Representation used by the inactive REPR. */
struct MVMInactive {
    MVMObject common;
};

/* Function for REPR setup. */
const MVMREPROps * MVMInactive_initialize(MVMThreadContext *tc);

/* Macro for VM inactive checks. */
MVM_STATIC_INLINE MVMint64 MVM_is_inactive(MVMThreadContext *tc, MVMObject *check) {
    return check == tc->instance->VMInactive;
}
