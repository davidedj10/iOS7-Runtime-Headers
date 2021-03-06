/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned int _count;
    unsigned int _maxCount;
}


- (BOOL)isEqualToList:(id)arg1;
- (void)sort:(id)arg1;
- (BOOL)removeKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)removeKeysMatchingPredicate:(id)arg1;
- (id)listWithout:(id)arg1;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)firstKey;
- (id)copyWithMaxCapacity:(unsigned int)arg1;
- (BOOL)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 lostKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)addKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)_addKeyToBack:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)initWithMaxCapacity:(unsigned int)arg1;
- (unsigned int)capacity;
- (id)init;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (BOOL)containsKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
