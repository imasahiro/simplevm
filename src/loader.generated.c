// This file is auto generated by src/codegen.rb
// DO NOT TOUCH!

// If you want to fix something, you must edit 'pegvm.def'
// and execute `ruby src/codegen.rb > src/loader.generated.c`
static Instruction *Emit_EXIT(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_EXIT(Instruction *self)
{
    fprintf(stderr, "[%p] EXIT ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_JUMP(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_JUMP(Instruction *self)
{
    fprintf(stderr, "[%p] JUMP ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CALL(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_CALL(Instruction *self)
{
    fprintf(stderr, "[%p] CALL ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RET(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RET(Instruction *self)
{
    fprintf(stderr, "[%p] RET ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_IFSUCC(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFSUCC(Instruction *self)
{
    fprintf(stderr, "[%p] IFSUCC ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_IFFAIL(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_IFFAIL(Instruction *self)
{
    fprintf(stderr, "[%p] IFFAIL ", self);
    fprintf(stderr, "target=%p", self->dst);
    fprintf(stderr, "\n");
}
static Instruction *Emit_NOP(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_NOP(Instruction *self)
{
    fprintf(stderr, "[%p] NOP ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Failure(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_Failure(Instruction *self)
{
    fprintf(stderr, "[%p] Failure ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchText(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_MatchText(Instruction *self)
{
    fprintf(stderr, "[%p] MatchText ", self);
    fprintf(stderr, "char='%c'", (char)self->ndata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchByteChar(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_MatchByteChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchByteChar ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchCharset(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->bdata = pegvm_make_charset(bdata);
    return self;
}
static void Dump_MatchCharset(Instruction *self)
{
    fprintf(stderr, "[%p] MatchCharset ", self);
    fprintf(stderr, "charset='%s'", pegvm_dump_charset(self->bdata));
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchAnyChar(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchAnyChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchAnyChar ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchTextNot(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchTextNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchTextNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchByteCharNot(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchByteCharNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchByteCharNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchCharsetNot(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchCharsetNot(Instruction *self)
{
    fprintf(stderr, "[%p] MatchCharsetNot ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalText(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchOptionalText(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalText ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalByteChar(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchOptionalByteChar(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalByteChar ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_MatchOptionalCharset(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_MatchOptionalCharset(Instruction *self)
{
    fprintf(stderr, "[%p] MatchOptionalCharset ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberPosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->ndata = ndata;
    return self;
}
static void Dump_RememberPosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitPosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_CommitPosition(Instruction *self)
{
    fprintf(stderr, "[%p] CommitPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_BacktrackPosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_BacktrackPosition(Instruction *self)
{
    fprintf(stderr, "[%p] BacktrackPosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberSequencePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RememberSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitSequencePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_CommitSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] CommitSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_BackTrackSequencePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_BackTrackSequencePosition(Instruction *self)
{
    fprintf(stderr, "[%p] BackTrackSequencePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RememberFailurePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RememberFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] RememberFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_UpdateFailurePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_UpdateFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] UpdateFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_ForgetFailurePosition(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_ForgetFailurePosition(Instruction *self)
{
    fprintf(stderr, "[%p] ForgetFailurePosition ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_StoreObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_StoreObject(Instruction *self)
{
    fprintf(stderr, "[%p] StoreObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_DropStoredObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_DropStoredObject(Instruction *self)
{
    fprintf(stderr, "[%p] DropStoredObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RestoreObject(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreObjectIfFailure(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RestoreObjectIfFailure(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreObjectIfFailure ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RestoreNegativeObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RestoreNegativeObject(Instruction *self)
{
    fprintf(stderr, "[%p] RestoreNegativeObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_ConnectObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_ConnectObject(Instruction *self)
{
    fprintf(stderr, "[%p] ConnectObject ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_DisableTransCapture(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_DisableTransCapture(Instruction *self)
{
    fprintf(stderr, "[%p] DisableTransCapture ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_EnableTransCapture(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_EnableTransCapture(Instruction *self)
{
    fprintf(stderr, "[%p] EnableTransCapture ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_NewObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_NewObject(Instruction *self)
{
    fprintf(stderr, "[%p] NewObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_LeftJoinObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_LeftJoinObject(Instruction *self)
{
    fprintf(stderr, "[%p] LeftJoinObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_CommitObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_CommitObject(Instruction *self)
{
    fprintf(stderr, "[%p] CommitObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_RefreshStoredObject(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_RefreshStoredObject(Instruction *self)
{
    fprintf(stderr, "[%p] RefreshStoredObject ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Tagging(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    self->bdata = pegvm_string_copy(bdata);
    return self;
}
static void Dump_Tagging(Instruction *self)
{
    fprintf(stderr, "[%p] Tagging ", self);
    fprintf(stderr, "text='%s'", (char *)self->bdata);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Value(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_Value(Instruction *self)
{
    fprintf(stderr, "[%p] Value ", self);
    fprintf(stderr, "\n");
}
static Instruction *Emit_Indent(Instruction *self, uint32_t ndata, ARRAY(uint8_t) *bdata)
{
    return self;
}
static void Dump_Indent(Instruction *self)
{
    fprintf(stderr, "[%p] Indent ", self);
    fprintf(stderr, "\n");
}
