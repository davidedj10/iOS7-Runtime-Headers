/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {
    NSString *_indexTitle;
    NSString *_name;
    unsigned int _numberOfObjects;
    NSArray *_objects;
}

@property(readonly) NSString * name;
@property(readonly) NSString * indexTitle;
@property(readonly) unsigned int numberOfObjects;
@property(readonly) NSArray * objects;


- (id)objects;
- (unsigned int)numberOfObjects;
- (id)indexTitle;
- (id)name;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end