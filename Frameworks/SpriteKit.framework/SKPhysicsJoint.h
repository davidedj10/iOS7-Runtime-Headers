/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding> {
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
}

@property(retain) SKPhysicsBody * bodyA;
@property(retain) SKPhysicsBody * bodyB;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setBodyB:(id)arg1;
- (void)setBodyA:(id)arg1;
- (id)bodyB;
- (id)bodyA;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
