/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "clang-c/Index.h"

typedef CXString (*clang_getFileNamePROC) (intptr_t);
typedef CXString (*clang_File_tryGetRealPathNamePROC) (intptr_t);
typedef CXSourceLocation (*clang_getNullLocationPROC) (void);
typedef CXSourceLocation (*clang_getLocationPROC) (intptr_t, intptr_t, jint, jint);
typedef CXSourceLocation (*clang_getLocationForOffsetPROC) (intptr_t, intptr_t, jint);
typedef CXSourceRange (*clang_getNullRangePROC) (void);
typedef CXSourceRange (*clang_getRangePROC) (CXSourceLocation, CXSourceLocation);
typedef CXSourceLocation (*clang_getRangeStartPROC) (CXSourceRange);
typedef CXSourceLocation (*clang_getRangeEndPROC) (CXSourceRange);
typedef CXString (*clang_formatDiagnosticPROC) (intptr_t, jint);
typedef CXSourceLocation (*clang_getDiagnosticLocationPROC) (intptr_t);
typedef CXString (*clang_getDiagnosticSpellingPROC) (intptr_t);
typedef CXString (*clang_getDiagnosticOptionPROC) (intptr_t, intptr_t);
typedef CXString (*clang_getDiagnosticCategoryTextPROC) (intptr_t);
typedef CXSourceRange (*clang_getDiagnosticRangePROC) (intptr_t, jint);
typedef CXString (*clang_getDiagnosticFixItPROC) (intptr_t, jint, intptr_t);
typedef CXString (*clang_getTranslationUnitSpellingPROC) (intptr_t);
typedef CXTUResourceUsage (*clang_getCXTUResourceUsagePROC) (intptr_t);
typedef CXString (*clang_TargetInfo_getTriplePROC) (intptr_t);
typedef CXCursor (*clang_getNullCursorPROC) (void);
typedef CXCursor (*clang_getTranslationUnitCursorPROC) (intptr_t);
typedef CXCursor (*clang_getCursorSemanticParentPROC) (CXCursor);
typedef CXCursor (*clang_getCursorLexicalParentPROC) (CXCursor);
typedef CXCursor (*clang_getCursorPROC) (intptr_t, CXSourceLocation);
typedef CXSourceLocation (*clang_getCursorLocationPROC) (CXCursor);
typedef CXSourceRange (*clang_getCursorExtentPROC) (CXCursor);
typedef CXType (*clang_getCursorTypePROC) (CXCursor);
typedef CXString (*clang_getTypeSpellingPROC) (CXType);
typedef CXType (*clang_getTypedefDeclUnderlyingTypePROC) (CXCursor);
typedef CXType (*clang_getEnumDeclIntegerTypePROC) (CXCursor);
typedef CXCursor (*clang_Cursor_getArgumentPROC) (CXCursor, jint);
typedef CXType (*clang_Cursor_getTemplateArgumentTypePROC) (CXCursor, jint);
typedef CXType (*clang_getCanonicalTypePROC) (CXType);
typedef CXString (*clang_getTypedefNamePROC) (CXType);
typedef CXType (*clang_getPointeeTypePROC) (CXType);
typedef CXCursor (*clang_getTypeDeclarationPROC) (CXType);
typedef CXString (*clang_getDeclObjCTypeEncodingPROC) (CXCursor);
typedef CXString (*clang_Type_getObjCEncodingPROC) (CXType);
typedef CXString (*clang_getTypeKindSpellingPROC) (jint);
typedef CXType (*clang_getResultTypePROC) (CXType);
typedef CXType (*clang_getArgTypePROC) (CXType, jint);
typedef CXType (*clang_Type_getObjCObjectBaseTypePROC) (CXType);
typedef CXCursor (*clang_Type_getObjCProtocolDeclPROC) (CXType, jint);
typedef CXType (*clang_Type_getObjCTypeArgPROC) (CXType, jint);
typedef CXType (*clang_getCursorResultTypePROC) (CXCursor);
typedef CXType (*clang_getElementTypePROC) (CXType);
typedef CXType (*clang_getArrayElementTypePROC) (CXType);
typedef CXType (*clang_Type_getNamedTypePROC) (CXType);
typedef CXType (*clang_Type_getClassTypePROC) (CXType);
typedef CXType (*clang_Type_getModifiedTypePROC) (CXType);
typedef CXType (*clang_Type_getTemplateArgumentAsTypePROC) (CXType, jint);
typedef CXCursor (*clang_getOverloadedDeclPROC) (CXCursor, jint);
typedef CXType (*clang_getIBOutletCollectionTypePROC) (CXCursor);
typedef CXString (*clang_getCursorUSRPROC) (CXCursor);
typedef CXString (*clang_constructUSR_ObjCClassPROC) (intptr_t);
typedef CXString (*clang_constructUSR_ObjCCategoryPROC) (intptr_t, intptr_t);
typedef CXString (*clang_constructUSR_ObjCProtocolPROC) (intptr_t);
typedef CXString (*clang_constructUSR_ObjCIvarPROC) (intptr_t, CXString);
typedef CXString (*clang_constructUSR_ObjCMethodPROC) (intptr_t, jint, CXString);
typedef CXString (*clang_constructUSR_ObjCPropertyPROC) (intptr_t, CXString);
typedef CXString (*clang_getCursorSpellingPROC) (CXCursor);
typedef CXSourceRange (*clang_Cursor_getSpellingNameRangePROC) (CXCursor, jint, jint);
typedef CXString (*clang_getCursorPrettyPrintedPROC) (CXCursor, intptr_t);
typedef CXString (*clang_getCursorDisplayNamePROC) (CXCursor);
typedef CXCursor (*clang_getCursorReferencedPROC) (CXCursor);
typedef CXCursor (*clang_getCursorDefinitionPROC) (CXCursor);
typedef CXCursor (*clang_getCanonicalCursorPROC) (CXCursor);
typedef CXType (*clang_Cursor_getReceiverTypePROC) (CXCursor);
typedef CXString (*clang_Cursor_getObjCPropertyGetterNamePROC) (CXCursor);
typedef CXString (*clang_Cursor_getObjCPropertySetterNamePROC) (CXCursor);
typedef CXSourceRange (*clang_Cursor_getCommentRangePROC) (CXCursor);
typedef CXString (*clang_Cursor_getRawCommentTextPROC) (CXCursor);
typedef CXString (*clang_Cursor_getBriefCommentTextPROC) (CXCursor);
typedef CXString (*clang_Cursor_getManglingPROC) (CXCursor);
typedef CXString (*clang_Module_getNamePROC) (intptr_t);
typedef CXString (*clang_Module_getFullNamePROC) (intptr_t);
typedef CXCursor (*clang_getSpecializedCursorTemplatePROC) (CXCursor);
typedef CXSourceRange (*clang_getCursorReferenceNameRangePROC) (CXCursor, jint, jint);
typedef CXString (*clang_getTokenSpellingPROC) (intptr_t, CXToken);
typedef CXSourceLocation (*clang_getTokenLocationPROC) (intptr_t, CXToken);
typedef CXSourceRange (*clang_getTokenExtentPROC) (intptr_t, CXToken);
typedef CXString (*clang_getCursorKindSpellingPROC) (jint);
typedef CXString (*clang_getCompletionChunkTextPROC) (intptr_t, jint);
typedef CXString (*clang_getCompletionAnnotationPROC) (intptr_t, jint);
typedef CXString (*clang_getCompletionParentPROC) (intptr_t, intptr_t);
typedef CXString (*clang_getCompletionBriefCommentPROC) (intptr_t);
typedef CXString (*clang_getCompletionFixItPROC) (intptr_t, jint, jint, intptr_t);
typedef CXString (*clang_codeCompleteGetContainerUSRPROC) (intptr_t);
typedef CXString (*clang_codeCompleteGetObjCSelectorPROC) (intptr_t);
typedef CXString (*clang_getClangVersionPROC) (void);
typedef CXSourceLocation (*clang_indexLoc_getCXSourceLocationPROC) (CXIdxLoc);

EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getFileName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong SFileAddress, jlong __result) {
    clang_getFileNamePROC clang_getFileName = (clang_getFileNamePROC)(intptr_t)__functionAddress;
    intptr_t SFile = (intptr_t)SFileAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getFileName(SFile);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1File_1tryGetRealPathName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong fileAddress, jlong __result) {
    clang_File_tryGetRealPathNamePROC clang_File_tryGetRealPathName = (clang_File_tryGetRealPathNamePROC)(intptr_t)__functionAddress;
    intptr_t file = (intptr_t)fileAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_File_tryGetRealPathName(file);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getNullLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong __result) {
    clang_getNullLocationPROC clang_getNullLocation = (clang_getNullLocationPROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getNullLocation();
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong tuAddress, jlong fileAddress, jint line, jint column, jlong __result) {
    clang_getLocationPROC clang_getLocation = (clang_getLocationPROC)(intptr_t)__functionAddress;
    intptr_t tu = (intptr_t)tuAddress;
    intptr_t file = (intptr_t)fileAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getLocation(tu, file, line, column);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getLocationForOffset(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong tuAddress, jlong fileAddress, jint offset, jlong __result) {
    clang_getLocationForOffsetPROC clang_getLocationForOffset = (clang_getLocationForOffsetPROC)(intptr_t)__functionAddress;
    intptr_t tu = (intptr_t)tuAddress;
    intptr_t file = (intptr_t)fileAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getLocationForOffset(tu, file, offset);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getNullRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong __result) {
    clang_getNullRangePROC clang_getNullRange = (clang_getNullRangePROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getNullRange();
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong beginAddress, jlong endAddress, jlong __result) {
    clang_getRangePROC clang_getRange = (clang_getRangePROC)(intptr_t)__functionAddress;
    CXSourceLocation *begin = (CXSourceLocation *)(intptr_t)beginAddress;
    CXSourceLocation *end = (CXSourceLocation *)(intptr_t)endAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getRange(*begin, *end);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getRangeStart(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong rangeAddress, jlong __result) {
    clang_getRangeStartPROC clang_getRangeStart = (clang_getRangeStartPROC)(intptr_t)__functionAddress;
    CXSourceRange *range = (CXSourceRange *)(intptr_t)rangeAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getRangeStart(*range);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getRangeEnd(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong rangeAddress, jlong __result) {
    clang_getRangeEndPROC clang_getRangeEnd = (clang_getRangeEndPROC)(intptr_t)__functionAddress;
    CXSourceRange *range = (CXSourceRange *)(intptr_t)rangeAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getRangeEnd(*range);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1formatDiagnostic(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jint Options, jlong __result) {
    clang_formatDiagnosticPROC clang_formatDiagnostic = (clang_formatDiagnosticPROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_formatDiagnostic(Diagnostic, Options);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jlong __result) {
    clang_getDiagnosticLocationPROC clang_getDiagnosticLocation = (clang_getDiagnosticLocationPROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getDiagnosticLocation(Diagnostic);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jlong __result) {
    clang_getDiagnosticSpellingPROC clang_getDiagnosticSpelling = (clang_getDiagnosticSpellingPROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getDiagnosticSpelling(Diagnostic);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticOption(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagAddress, jlong DisableAddress, jlong __result) {
    clang_getDiagnosticOptionPROC clang_getDiagnosticOption = (clang_getDiagnosticOptionPROC)(intptr_t)__functionAddress;
    intptr_t Diag = (intptr_t)DiagAddress;
    intptr_t Disable = (intptr_t)DisableAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getDiagnosticOption(Diag, Disable);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticCategoryText(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jlong __result) {
    clang_getDiagnosticCategoryTextPROC clang_getDiagnosticCategoryText = (clang_getDiagnosticCategoryTextPROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getDiagnosticCategoryText(Diagnostic);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jint Range, jlong __result) {
    clang_getDiagnosticRangePROC clang_getDiagnosticRange = (clang_getDiagnosticRangePROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getDiagnosticRange(Diagnostic, Range);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDiagnosticFixIt(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong DiagnosticAddress, jint FixIt, jlong ReplacementRangeAddress, jlong __result) {
    clang_getDiagnosticFixItPROC clang_getDiagnosticFixIt = (clang_getDiagnosticFixItPROC)(intptr_t)__functionAddress;
    intptr_t Diagnostic = (intptr_t)DiagnosticAddress;
    intptr_t ReplacementRange = (intptr_t)ReplacementRangeAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getDiagnosticFixIt(Diagnostic, FixIt, ReplacementRange);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTranslationUnitSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CTUnitAddress, jlong __result) {
    clang_getTranslationUnitSpellingPROC clang_getTranslationUnitSpelling = (clang_getTranslationUnitSpellingPROC)(intptr_t)__functionAddress;
    intptr_t CTUnit = (intptr_t)CTUnitAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getTranslationUnitSpelling(CTUnit);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCXTUResourceUsage(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong __result) {
    clang_getCXTUResourceUsagePROC clang_getCXTUResourceUsage = (clang_getCXTUResourceUsagePROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXTUResourceUsage*)(intptr_t)__result) = clang_getCXTUResourceUsage(TU);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1TargetInfo_1getTriple(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong InfoAddress, jlong __result) {
    clang_TargetInfo_getTriplePROC clang_TargetInfo_getTriple = (clang_TargetInfo_getTriplePROC)(intptr_t)__functionAddress;
    intptr_t Info = (intptr_t)InfoAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_TargetInfo_getTriple(Info);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getNullCursor(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong __result) {
    clang_getNullCursorPROC clang_getNullCursor = (clang_getNullCursorPROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getNullCursor();
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTranslationUnitCursor(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong __result) {
    clang_getTranslationUnitCursorPROC clang_getTranslationUnitCursor = (clang_getTranslationUnitCursorPROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getTranslationUnitCursor(TU);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorSemanticParent(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorSemanticParentPROC clang_getCursorSemanticParent = (clang_getCursorSemanticParentPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCursorSemanticParent(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorLexicalParent(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorLexicalParentPROC clang_getCursorLexicalParent = (clang_getCursorLexicalParentPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCursorLexicalParent(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursor(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong locationAddress, jlong __result) {
    clang_getCursorPROC clang_getCursor = (clang_getCursorPROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    CXSourceLocation *location = (CXSourceLocation *)(intptr_t)locationAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCursor(TU, *location);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorLocationPROC clang_getCursorLocation = (clang_getCursorLocationPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getCursorLocation(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorExtent(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorExtentPROC clang_getCursorExtent = (clang_getCursorExtentPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getCursorExtent(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getCursorTypePROC clang_getCursorType = (clang_getCursorTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getCursorType(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTypeSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CTAddress, jlong __result) {
    clang_getTypeSpellingPROC clang_getTypeSpelling = (clang_getTypeSpellingPROC)(intptr_t)__functionAddress;
    CXType *CT = (CXType *)(intptr_t)CTAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getTypeSpelling(*CT);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTypedefDeclUnderlyingType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getTypedefDeclUnderlyingTypePROC clang_getTypedefDeclUnderlyingType = (clang_getTypedefDeclUnderlyingTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getTypedefDeclUnderlyingType(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getEnumDeclIntegerType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getEnumDeclIntegerTypePROC clang_getEnumDeclIntegerType = (clang_getEnumDeclIntegerTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getEnumDeclIntegerType(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getArgument(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jint i, jlong __result) {
    clang_Cursor_getArgumentPROC clang_Cursor_getArgument = (clang_Cursor_getArgumentPROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_Cursor_getArgument(*C, i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getTemplateArgumentType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jint I, jlong __result) {
    clang_Cursor_getTemplateArgumentTypePROC clang_Cursor_getTemplateArgumentType = (clang_Cursor_getTemplateArgumentTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Cursor_getTemplateArgumentType(*C, I);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCanonicalType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getCanonicalTypePROC clang_getCanonicalType = (clang_getCanonicalTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getCanonicalType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTypedefName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CTAddress, jlong __result) {
    clang_getTypedefNamePROC clang_getTypedefName = (clang_getTypedefNamePROC)(intptr_t)__functionAddress;
    CXType *CT = (CXType *)(intptr_t)CTAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getTypedefName(*CT);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getPointeeType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getPointeeTypePROC clang_getPointeeType = (clang_getPointeeTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getPointeeType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTypeDeclaration(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getTypeDeclarationPROC clang_getTypeDeclaration = (clang_getTypeDeclarationPROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getTypeDeclaration(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getDeclObjCTypeEncoding(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getDeclObjCTypeEncodingPROC clang_getDeclObjCTypeEncoding = (clang_getDeclObjCTypeEncodingPROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getDeclObjCTypeEncoding(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getObjCEncoding(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong typeAddress, jlong __result) {
    clang_Type_getObjCEncodingPROC clang_Type_getObjCEncoding = (clang_Type_getObjCEncodingPROC)(intptr_t)__functionAddress;
    CXType *type = (CXType *)(intptr_t)typeAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Type_getObjCEncoding(*type);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTypeKindSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jint K, jlong __result) {
    clang_getTypeKindSpellingPROC clang_getTypeKindSpelling = (clang_getTypeKindSpellingPROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getTypeKindSpelling(K);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getResultType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getResultTypePROC clang_getResultType = (clang_getResultTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getResultType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getArgType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jint i, jlong __result) {
    clang_getArgTypePROC clang_getArgType = (clang_getArgTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getArgType(*T, i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getObjCObjectBaseType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_Type_getObjCObjectBaseTypePROC clang_Type_getObjCObjectBaseType = (clang_Type_getObjCObjectBaseTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getObjCObjectBaseType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getObjCProtocolDecl(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jint i, jlong __result) {
    clang_Type_getObjCProtocolDeclPROC clang_Type_getObjCProtocolDecl = (clang_Type_getObjCProtocolDeclPROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_Type_getObjCProtocolDecl(*T, i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getObjCTypeArg(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jint i, jlong __result) {
    clang_Type_getObjCTypeArgPROC clang_Type_getObjCTypeArg = (clang_Type_getObjCTypeArgPROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getObjCTypeArg(*T, i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorResultType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getCursorResultTypePROC clang_getCursorResultType = (clang_getCursorResultTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getCursorResultType(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getElementType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getElementTypePROC clang_getElementType = (clang_getElementTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getElementType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getArrayElementType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_getArrayElementTypePROC clang_getArrayElementType = (clang_getArrayElementTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getArrayElementType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getNamedType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_Type_getNamedTypePROC clang_Type_getNamedType = (clang_Type_getNamedTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getNamedType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getClassType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_Type_getClassTypePROC clang_Type_getClassType = (clang_Type_getClassTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getClassType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getModifiedType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jlong __result) {
    clang_Type_getModifiedTypePROC clang_Type_getModifiedType = (clang_Type_getModifiedTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getModifiedType(*T);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Type_1getTemplateArgumentAsType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TAddress, jint i, jlong __result) {
    clang_Type_getTemplateArgumentAsTypePROC clang_Type_getTemplateArgumentAsType = (clang_Type_getTemplateArgumentAsTypePROC)(intptr_t)__functionAddress;
    CXType *T = (CXType *)(intptr_t)TAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Type_getTemplateArgumentAsType(*T, i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getOverloadedDecl(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jint index, jlong __result) {
    clang_getOverloadedDeclPROC clang_getOverloadedDecl = (clang_getOverloadedDeclPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getOverloadedDecl(*cursor, index);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getIBOutletCollectionType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getIBOutletCollectionTypePROC clang_getIBOutletCollectionType = (clang_getIBOutletCollectionTypePROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_getIBOutletCollectionType(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorUSR(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorUSRPROC clang_getCursorUSR = (clang_getCursorUSRPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCursorUSR(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCClass(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong class_nameAddress, jlong __result) {
    clang_constructUSR_ObjCClassPROC clang_constructUSR_ObjCClass = (clang_constructUSR_ObjCClassPROC)(intptr_t)__functionAddress;
    intptr_t class_name = (intptr_t)class_nameAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCClass(class_name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCCategory(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong class_nameAddress, jlong category_nameAddress, jlong __result) {
    clang_constructUSR_ObjCCategoryPROC clang_constructUSR_ObjCCategory = (clang_constructUSR_ObjCCategoryPROC)(intptr_t)__functionAddress;
    intptr_t class_name = (intptr_t)class_nameAddress;
    intptr_t category_name = (intptr_t)category_nameAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCCategory(class_name, category_name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCProtocol(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong protocol_nameAddress, jlong __result) {
    clang_constructUSR_ObjCProtocolPROC clang_constructUSR_ObjCProtocol = (clang_constructUSR_ObjCProtocolPROC)(intptr_t)__functionAddress;
    intptr_t protocol_name = (intptr_t)protocol_nameAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCProtocol(protocol_name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCIvar(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong nameAddress, jlong classUSRAddress, jlong __result) {
    clang_constructUSR_ObjCIvarPROC clang_constructUSR_ObjCIvar = (clang_constructUSR_ObjCIvarPROC)(intptr_t)__functionAddress;
    intptr_t name = (intptr_t)nameAddress;
    CXString *classUSR = (CXString *)(intptr_t)classUSRAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCIvar(name, *classUSR);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCMethod(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong nameAddress, jint isInstanceMethod, jlong classUSRAddress, jlong __result) {
    clang_constructUSR_ObjCMethodPROC clang_constructUSR_ObjCMethod = (clang_constructUSR_ObjCMethodPROC)(intptr_t)__functionAddress;
    intptr_t name = (intptr_t)nameAddress;
    CXString *classUSR = (CXString *)(intptr_t)classUSRAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCMethod(name, isInstanceMethod, *classUSR);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1constructUSR_1ObjCProperty(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong propertyAddress, jlong classUSRAddress, jlong __result) {
    clang_constructUSR_ObjCPropertyPROC clang_constructUSR_ObjCProperty = (clang_constructUSR_ObjCPropertyPROC)(intptr_t)__functionAddress;
    intptr_t property = (intptr_t)propertyAddress;
    CXString *classUSR = (CXString *)(intptr_t)classUSRAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_constructUSR_ObjCProperty(property, *classUSR);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorSpellingPROC clang_getCursorSpelling = (clang_getCursorSpellingPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCursorSpelling(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getSpellingNameRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jint pieceIndex, jint options, jlong __result) {
    clang_Cursor_getSpellingNameRangePROC clang_Cursor_getSpellingNameRange = (clang_Cursor_getSpellingNameRangePROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_Cursor_getSpellingNameRange(*cursor, pieceIndex, options);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorPrettyPrinted(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CursorAddress, jlong PolicyAddress, jlong __result) {
    clang_getCursorPrettyPrintedPROC clang_getCursorPrettyPrinted = (clang_getCursorPrettyPrintedPROC)(intptr_t)__functionAddress;
    CXCursor *Cursor = (CXCursor *)(intptr_t)CursorAddress;
    intptr_t Policy = (intptr_t)PolicyAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCursorPrettyPrinted(*Cursor, Policy);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorDisplayName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorDisplayNamePROC clang_getCursorDisplayName = (clang_getCursorDisplayNamePROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCursorDisplayName(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorReferenced(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorReferencedPROC clang_getCursorReferenced = (clang_getCursorReferencedPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCursorReferenced(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorDefinition(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCursorDefinitionPROC clang_getCursorDefinition = (clang_getCursorDefinitionPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCursorDefinition(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCanonicalCursor(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_getCanonicalCursorPROC clang_getCanonicalCursor = (clang_getCanonicalCursorPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getCanonicalCursor(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getReceiverType(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getReceiverTypePROC clang_Cursor_getReceiverType = (clang_Cursor_getReceiverTypePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXType*)(intptr_t)__result) = clang_Cursor_getReceiverType(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getObjCPropertyGetterName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getObjCPropertyGetterNamePROC clang_Cursor_getObjCPropertyGetterName = (clang_Cursor_getObjCPropertyGetterNamePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Cursor_getObjCPropertyGetterName(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getObjCPropertySetterName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getObjCPropertySetterNamePROC clang_Cursor_getObjCPropertySetterName = (clang_Cursor_getObjCPropertySetterNamePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Cursor_getObjCPropertySetterName(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getCommentRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getCommentRangePROC clang_Cursor_getCommentRange = (clang_Cursor_getCommentRangePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_Cursor_getCommentRange(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getRawCommentText(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getRawCommentTextPROC clang_Cursor_getRawCommentText = (clang_Cursor_getRawCommentTextPROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Cursor_getRawCommentText(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getBriefCommentText(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_Cursor_getBriefCommentTextPROC clang_Cursor_getBriefCommentText = (clang_Cursor_getBriefCommentTextPROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Cursor_getBriefCommentText(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Cursor_1getMangling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong cursorAddress, jlong __result) {
    clang_Cursor_getManglingPROC clang_Cursor_getMangling = (clang_Cursor_getManglingPROC)(intptr_t)__functionAddress;
    CXCursor *cursor = (CXCursor *)(intptr_t)cursorAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Cursor_getMangling(*cursor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Module_1getName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong ModuleAddress, jlong __result) {
    clang_Module_getNamePROC clang_Module_getName = (clang_Module_getNamePROC)(intptr_t)__functionAddress;
    intptr_t Module = (intptr_t)ModuleAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Module_getName(Module);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1Module_1getFullName(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong ModuleAddress, jlong __result) {
    clang_Module_getFullNamePROC clang_Module_getFullName = (clang_Module_getFullNamePROC)(intptr_t)__functionAddress;
    intptr_t Module = (intptr_t)ModuleAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_Module_getFullName(Module);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getSpecializedCursorTemplate(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jlong __result) {
    clang_getSpecializedCursorTemplatePROC clang_getSpecializedCursorTemplate = (clang_getSpecializedCursorTemplatePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXCursor*)(intptr_t)__result) = clang_getSpecializedCursorTemplate(*C);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorReferenceNameRange(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong CAddress, jint NameFlags, jint PieceIndex, jlong __result) {
    clang_getCursorReferenceNameRangePROC clang_getCursorReferenceNameRange = (clang_getCursorReferenceNameRangePROC)(intptr_t)__functionAddress;
    CXCursor *C = (CXCursor *)(intptr_t)CAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getCursorReferenceNameRange(*C, NameFlags, PieceIndex);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTokenSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong tokenAddress, jlong __result) {
    clang_getTokenSpellingPROC clang_getTokenSpelling = (clang_getTokenSpellingPROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    CXToken *token = (CXToken *)(intptr_t)tokenAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getTokenSpelling(TU, *token);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTokenLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong tokenAddress, jlong __result) {
    clang_getTokenLocationPROC clang_getTokenLocation = (clang_getTokenLocationPROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    CXToken *token = (CXToken *)(intptr_t)tokenAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_getTokenLocation(TU, *token);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getTokenExtent(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong TUAddress, jlong tokenAddress, jlong __result) {
    clang_getTokenExtentPROC clang_getTokenExtent = (clang_getTokenExtentPROC)(intptr_t)__functionAddress;
    intptr_t TU = (intptr_t)TUAddress;
    CXToken *token = (CXToken *)(intptr_t)tokenAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceRange*)(intptr_t)__result) = clang_getTokenExtent(TU, *token);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCursorKindSpelling(JNIEnv *__env, jclass clazz, jlong __functionAddress, jint Kind, jlong __result) {
    clang_getCursorKindSpellingPROC clang_getCursorKindSpelling = (clang_getCursorKindSpellingPROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCursorKindSpelling(Kind);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCompletionChunkText(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong completion_stringAddress, jint chunk_number, jlong __result) {
    clang_getCompletionChunkTextPROC clang_getCompletionChunkText = (clang_getCompletionChunkTextPROC)(intptr_t)__functionAddress;
    intptr_t completion_string = (intptr_t)completion_stringAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCompletionChunkText(completion_string, chunk_number);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCompletionAnnotation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong completion_stringAddress, jint annotation_number, jlong __result) {
    clang_getCompletionAnnotationPROC clang_getCompletionAnnotation = (clang_getCompletionAnnotationPROC)(intptr_t)__functionAddress;
    intptr_t completion_string = (intptr_t)completion_stringAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCompletionAnnotation(completion_string, annotation_number);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCompletionParent__JJJJ(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong completion_stringAddress, jlong kindAddress, jlong __result) {
    clang_getCompletionParentPROC clang_getCompletionParent = (clang_getCompletionParentPROC)(intptr_t)__functionAddress;
    intptr_t completion_string = (intptr_t)completion_stringAddress;
    intptr_t kind = (intptr_t)kindAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCompletionParent(completion_string, kind);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCompletionBriefComment(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong completion_stringAddress, jlong __result) {
    clang_getCompletionBriefCommentPROC clang_getCompletionBriefComment = (clang_getCompletionBriefCommentPROC)(intptr_t)__functionAddress;
    intptr_t completion_string = (intptr_t)completion_stringAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCompletionBriefComment(completion_string);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getCompletionFixIt(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong resultsAddress, jint completion_index, jint fixit_index, jlong replacement_rangeAddress, jlong __result) {
    clang_getCompletionFixItPROC clang_getCompletionFixIt = (clang_getCompletionFixItPROC)(intptr_t)__functionAddress;
    intptr_t results = (intptr_t)resultsAddress;
    intptr_t replacement_range = (intptr_t)replacement_rangeAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getCompletionFixIt(results, completion_index, fixit_index, replacement_range);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1codeCompleteGetContainerUSR(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong ResultsAddress, jlong __result) {
    clang_codeCompleteGetContainerUSRPROC clang_codeCompleteGetContainerUSR = (clang_codeCompleteGetContainerUSRPROC)(intptr_t)__functionAddress;
    intptr_t Results = (intptr_t)ResultsAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_codeCompleteGetContainerUSR(Results);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1codeCompleteGetObjCSelector(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong ResultsAddress, jlong __result) {
    clang_codeCompleteGetObjCSelectorPROC clang_codeCompleteGetObjCSelector = (clang_codeCompleteGetObjCSelectorPROC)(intptr_t)__functionAddress;
    intptr_t Results = (intptr_t)ResultsAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_codeCompleteGetObjCSelector(Results);
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1getClangVersion(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong __result) {
    clang_getClangVersionPROC clang_getClangVersion = (clang_getClangVersionPROC)(intptr_t)__functionAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXString*)(intptr_t)__result) = clang_getClangVersion();
}

JNIEXPORT void JNICALL Java_org_lwjgl_llvm_ClangIndex_nclang_1indexLoc_1getCXSourceLocation(JNIEnv *__env, jclass clazz, jlong __functionAddress, jlong locAddress, jlong __result) {
    clang_indexLoc_getCXSourceLocationPROC clang_indexLoc_getCXSourceLocation = (clang_indexLoc_getCXSourceLocationPROC)(intptr_t)__functionAddress;
    CXIdxLoc *loc = (CXIdxLoc *)(intptr_t)locAddress;
    UNUSED_PARAMS(__env, clazz)
    *((CXSourceLocation*)(intptr_t)__result) = clang_indexLoc_getCXSourceLocation(*loc);
}

EXTERN_C_EXIT
