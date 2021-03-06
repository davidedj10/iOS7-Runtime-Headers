/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet;

@interface IMIDStatusController : NSObject  {
    NSMutableSet *_servicesRegistered;
}

@property(retain) NSMutableSet * _servicesRegistered;

+ (id)sharedInstance;

- (void)set_servicesRegistered:(id)arg1;
- (id)_servicesRegistered;
- (int)statusForID:(id)arg1 onService:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (int)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(int)arg2 forService:(id)arg3;
- (int)_idStatusForID:(id)arg1 onService:(id)arg2;
- (int)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(BOOL)arg3;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (int)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (id)init;
- (void)dealloc;

@end
