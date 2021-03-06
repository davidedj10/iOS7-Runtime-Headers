/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSCache;

@interface ABMemberNameViewCache : NSObject  {
    NSCache *_styleProvidersCache;
}

+ (id)sharedInstance;

- (id)_cacheForStyleProvider:(id)arg1;
- (id)boldTextAttributesForStyleProvider:(id)arg1;
- (id)regularTextAttributesForStyleProvider:(id)arg1;
- (float)nameLabelBaselineOffsetFromBottomForStyleProvider:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nameLabelFrameForStyleProvider:(id)arg1;
- (bool)hasNameLabelFrameForStyleProvider:(id)arg1;
- (id)memberNamePlaceholderFontForStyleProvider:(id)arg1;
- (id)memberNameBoldFontForStyleProvider:(id)arg1;
- (id)memberNameRegularFontForStyleProvider:(id)arg1;
- (void)setNameLabelBaselineOffsetFromBottom:(float)arg1 forStyleProvider:(id)arg2;
- (void)setNameLabelFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forStyleProvider:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)init;
- (void)dealloc;

@end
