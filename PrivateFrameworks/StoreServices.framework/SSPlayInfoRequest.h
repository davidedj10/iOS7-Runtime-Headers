/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPlayInfoResponse, <SSPlayInfoRequestDelegate>, SSPlayInfoRequestContext;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property(readonly) SSPlayInfoRequestContext * playInfoContext;
@property(readonly) SSPlayInfoResponse * playInfoResponse;
@property <SSPlayInfoRequestDelegate> * delegate;


- (id)playInfoResponse;
- (id)playInfoContext;
- (void)startWithPlayInfoResponseBlock:(id)arg1;
- (id)initWithPlayInfoContext:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)start;

@end