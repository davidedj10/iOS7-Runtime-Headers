/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDTCCUtilities : NSObject  {
}

+ (struct __CFString { }*)_TCCServiceForAccountTypeID:(id)arg1;
+ (BOOL)clearAllTCCStatesForAccountType:(id)arg1;
+ (id)allTCCStatesForAccountType:(id)arg1;
+ (BOOL)clearTCCStateForClient:(id)arg1 accountType:(id)arg2;
+ (BOOL)setTCCStateForClient:(id)arg1 accountType:(id)arg2 toGranted:(BOOL)arg3;
+ (BOOL)TCCSupportedForAccountType:(id)arg1;
+ (int)TCCStateForClient:(id)arg1 accountType:(id)arg2;


@end
