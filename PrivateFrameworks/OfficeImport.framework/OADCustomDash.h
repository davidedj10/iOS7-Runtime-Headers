/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADCustomDash : OADDash  {
    NSMutableArray *mStops;
    unsigned int mAreStopsOverridden : 1;
}

+ (id)defaultProperties;

- (BOOL)areStopsOverridden;
- (id)initWithDefaults;
- (void)addStopWithDash:(float)arg1 space:(float)arg2;
- (id)stops;
- (void)setStops:(id)arg1;
- (float)spaceAtIndex:(unsigned int)arg1;
- (float)dashAtIndex:(unsigned int)arg1;
- (unsigned int)stopCount;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
