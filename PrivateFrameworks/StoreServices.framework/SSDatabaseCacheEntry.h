/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity  {
    SSPersistentCache *_persistentCache;
}

+ (unsigned long long)_fetchPersistentID:(id)arg1 inDatabase:(id)arg2;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (id)dataBlob:(BOOL*)arg1;
- (void)setPersistentCache:(id)arg1;
- (id)initWithLookupKey:(id)arg1 inDatabase:(id)arg2;
- (void)dealloc;
- (id)description;

@end
