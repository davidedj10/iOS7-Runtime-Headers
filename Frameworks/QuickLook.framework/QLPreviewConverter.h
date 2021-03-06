/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURLResponse, NSString, NSURLRequest, NSDictionary, QLPreviewParts;

@interface QLPreviewConverter : NSObject  {
    QLPreviewParts *_previewParts;
    NSDictionary *_options;
}

@property(readonly) NSString * previewFileName;
@property(readonly) NSString * previewUTI;
@property(readonly) NSURLRequest * previewRequest;
@property(readonly) NSURLResponse * previewResponse;
@property(readonly) QLPreviewParts * previewParts;

+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSpreadSheetDocumentType:(id)arg1;
+ (BOOL)isRTFDocumentType:(id)arg1;
+ (BOOL)isLPDFDocumentType:(id)arg1;
+ (BOOL)isCSVDocumentType:(id)arg1;
+ (BOOL)isIWorkDocumentType:(id)arg1;
+ (BOOL)isOfficeDocumentType:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (BOOL)canConvertDocumentType:(id)arg1;
+ (id)_spreadSheetUTIs;
+ (id)_rtfUTIs;
+ (id)_lpdfUTIs;
+ (id)_csvUTIs;
+ (id)_iWorkUTIs;
+ (id)_officeUTIs;

- (id)previewParts;
- (void)_register;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (BOOL)htmlErrorDisabled;
- (void)setHtmlErrorDisabled:(BOOL)arg1;
- (BOOL)isComputed;
- (void)finishConverting;
- (void)finishedAppendingData;
- (void)appendDataArray:(id)arg1;
- (id)previewFileName;
- (id)previewResponse;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)safeRequestForRequest:(id)arg1;
- (id)previewRequest;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)previewUTI;
- (void)dealloc;
- (void)cancel;
- (BOOL)isCancelled;
- (void)appendData:(id)arg1;

@end
