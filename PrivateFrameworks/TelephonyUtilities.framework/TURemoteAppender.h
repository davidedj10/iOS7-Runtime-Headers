/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {
    struct _xpc_connection_s { } *_connection;
    NSString *_name;
    struct dispatch_queue_s { } *_backgroundQueue;
}


- (void)flush;
- (void)setAppenderDelegate:(id)arg1;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (id)initWithName:(id)arg1;
- (void)dealloc;

@end
