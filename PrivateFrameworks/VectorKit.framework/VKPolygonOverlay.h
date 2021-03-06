/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOMapRegion, NSArray;

@interface VKPolygonOverlay : VKMultiPointOverlay <VKOverlay> {
    NSArray *_interiorPolygons;
}

@property(readonly) NSArray * interiorPolygons;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) GEOMapRegion * boundingMapRegion;

+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2 interiorPolygons:(id)arg3;

- (id)interiorPolygons;
- (void)dealloc;

@end
