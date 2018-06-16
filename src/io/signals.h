MVMObject * MVM_io_get_signals(MVMThreadContext *tc);
MVMint64    MVM_io_signal_emit(MVMThreadContext *tc, MVMint64 pid, MVMint64 signal);
MVMObject * MVM_io_signal_handle(MVMThreadContext *tc, MVMObject *queue,
    MVMObject *schedulee, MVMint64 signal, MVMObject *async_type);
