/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItemView, UIStatusBarForegroundView;

@interface UIStatusBarLayoutManager : NSObject  {
    UIStatusBarForegroundView *_foregroundView;
    int _region;
    UIStatusBarItemView *_itemViews[32];
    BOOL _persistentAnimationsEnabled;
}

@property UIStatusBarForegroundView * foregroundView;
@property BOOL persistentAnimationsEnabled;


- (void)dealloc;
- (BOOL)persistentAnimationsEnabled;
- (void)itemView:(id)arg1 widthChangedBy:(float)arg2;
- (BOOL)updateDoubleHeightItem;
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL*)arg1;
- (SEL)_itemSortSelector;
- (float)_widthNeededForItemView:(id)arg1;
- (id)_viewForItem:(id)arg1;
- (BOOL)_processDelta:(float)arg1 forView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_repositionedNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 widthDelta:(float)arg2;
- (float)_positionAfterPlacingItemView:(id)arg1 startPosition:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForItemView:(id)arg1 startPosition:(float)arg2;
- (id)_itemViewsSortedForLayout;
- (id)_createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3;
- (id)foregroundView;
- (BOOL)_updateItemView:(id)arg1 withData:(id)arg2 actions:(int)arg3 animated:(BOOL)arg4;
- (id)_itemViews;
- (void)_positionNewItemViewsWithEnabledItems:(BOOL*)arg1;
- (void)_prepareEnabledItemType:(int)arg1 withEnabledItems:(BOOL*)arg2 withData:(id)arg3 actions:(int)arg4 itemAppearing:(BOOL*)arg5 itemDisappearing:(BOOL*)arg6;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (BOOL)itemIsVisible:(id)arg1;
- (float)removeOverlap:(float)arg1 fromItems:(id)arg2;
- (float)widthNeededForItem:(id)arg1;
- (float)distributeOverlap:(float)arg1 amongItems:(id)arg2;
- (float)widthNeededForItems:(id)arg1;
- (void)clearOverlapFromItems:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItems:(id)arg1;
- (void)makeVisibleItemsPerformPendedActions;
- (void)removeDisabledItems:(BOOL*)arg1;
- (void)positionInvisibleItems;
- (void)setVisibilityOfItem:(id)arg1 visible:(BOOL)arg2;
- (void)reflowWithVisibleItems:(id)arg1 duration:(double)arg2;
- (void)setVisibilityOfAllItems:(BOOL)arg1;
- (BOOL)updateItemsWithData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)prepareEnabledItems:(BOOL*)arg1 withData:(id)arg2 actions:(int)arg3;
- (void)setForegroundView:(id)arg1;
- (id)initWithRegion:(int)arg1 foregroundView:(id)arg2;
- (float)_startPosition;

@end
