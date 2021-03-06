/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIInterpolatingMotionEffect : UIMotionEffect  {
    float _horizontalAccelerationBoostFactor;
    float _verticalAccelerationBoostFactor;
    NSString *_keyPath;
    int _type;
    id _minimumRelativeValue;
    id _maximumRelativeValue;
}

@property(readonly) NSString * keyPath;
@property(readonly) int type;
@property(retain) id minimumRelativeValue;
@property(retain) id maximumRelativeValue;


- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)maximumRelativeValue;
- (id)minimumRelativeValue;
- (void)_setType:(int)arg1;
- (void)_setKeyPath:(id)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (float)_verticalAccelerationBoostFactor;
- (void)_setVerticalAccelerationBoostFactor:(float)arg1;
- (float)_horizontalAccelerationBoostFactor;
- (void)_setHorizontalAccelerationBoostFactor:(float)arg1;
- (void)setMaximumRelativeValue:(id)arg1;
- (void)setMinimumRelativeValue:(id)arg1;
- (id)initWithKeyPath:(id)arg1 type:(int)arg2;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { float x1; float x2; })arg1;
- (int)type;
- (id)keyPath;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
