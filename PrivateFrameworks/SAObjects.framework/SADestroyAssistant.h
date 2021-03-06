/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SADestroyAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * assistantId;
@property(copy) NSString * speechId;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)destroyAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)destroyAssistant;

- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
