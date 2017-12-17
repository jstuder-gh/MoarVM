/* Representation used by the deleted REPR. */
struct MVMDeleted {
    MVMObject common;
};

/* Function for REPR setup. */
const MVMREPROps * MVMDeleted_initialize(MVMThreadContext *tc);

/* Macro for VM deleted checks. */
MVM_STATIC_INLINE MVMint64 MVM_is_deleted(MVMThreadContext *tc, MVMObject *check) {
    return !check || check == tc->instance->VMDeleted;
}
