/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKQuadTrie : NSObject  {
    unsigned int _maxItems;
    struct { 
        double width; 
        double height; 
    } _minSize;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _initialRegion;
    void *__root;
}


- (id)itemDescriptions;
- (id)depthFirstDescription;
- (id)breadthFirstDescription;
- (void)clearAllItemsPerforming:(id)arg1;
- (id)_itemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemsPassingRectTest:(id)arg1 coordinateTest:(id)arg2;
- (id)itemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insert:(id)arg1;
- (void)foreach:(id)arg1;
- (id)initWithInitialRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 minimumSize:(struct { double x1; double x2; })arg2 maximumItems:(unsigned int)arg3;
- (BOOL)contains:(id)arg1;
- (id)allItems;
- (unsigned int)count;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (BOOL)remove:(id)arg1;

@end
