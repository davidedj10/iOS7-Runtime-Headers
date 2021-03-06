/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIShowcaseViewController, SKUIShowcasePageComponent, SKUIMissingItemLoader;

@interface SKUIShowcasePageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIShowcaseDelegate> {
    SKUIMissingItemLoader *_missingItemLoader;
    BOOL _pinned;
    SKUIShowcaseViewController *_showcaseViewController;
}

@property(readonly) SKUIShowcasePageComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (id)_showcaseViewController;
- (void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3;
- (void)showcase:(id)arg1 didDisplayItemAtIndex:(int)arg2;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (id)_missingItemLoader;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)restorePinnedHeaderView:(id)arg1;
- (id)popPinnedHeaderView;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
