/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData;

@interface IDSPushHandler : NSObject  {
}

@property(readonly) NSData * pushToken;

+ (id)sharedInstance;

- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)requestKeepAlive;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (id)pushToken;
- (void)removeListener:(id)arg1;
- (id)init;
- (void)dealloc;

@end
