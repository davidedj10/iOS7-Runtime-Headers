/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAClockObject;

@interface SAClockAdd : SADomainCommand  {
}

@property(retain) SAClockObject * clockToAdd;

+ (id)addWithDictionary:(id)arg1 context:(id)arg2;
+ (id)add;

- (void)setClockToAdd:(id)arg1;
- (id)clockToAdd;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
