/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject  {
    id target;
    id defaultTarget;
    _WebSafeAsyncForwarder *asyncForwarder;
    long asyncForwarderPred;
}


- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;
- (void)clearTarget;
- (id)asyncForwarder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
