/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * restrictions;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRestrictions;

- (id)encodedClassName;
- (void)setRestrictions:(id)arg1;
- (id)restrictions;
- (id)groupIdentifier;

@end
