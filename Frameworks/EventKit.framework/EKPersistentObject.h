/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableSet, EKEventStore, NSMutableDictionary;

@interface EKPersistentObject : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    EKEventStore *_eventStore;
    id _objectID;
    struct __CFDictionary { } *_loadedProperties;
    NSMutableDictionary *_referencers;
    NSMutableSet *_dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary *_committedProperties;
}

@property(readonly) EKEventStore * eventStore;
@property(readonly) int entityType;
@property(retain) NSMutableDictionary * committedProperties;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (BOOL)validate:(id*)arg1;
- (void)setCommittedProperties:(id)arg1;
- (id)committedProperties;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDataValueForKey:(id)arg1;
- (void)primitiveSetUnboundedStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveUnboundedStringValueForKey:(id)arg1;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDateValueForKey:(id)arg1;
- (void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)primitiveBoolValueForKey:(id)arg1;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveNumberValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (BOOL)refreshExcludingProperties:(id)arg1;
- (BOOL)existsInStore;
- (BOOL)_areDefaultPropertiesLoaded;
- (BOOL)isPropertyLoaded:(id)arg1;
- (void)_fastpathSetProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3;
- (id)_loadStringValueForKey:(id)arg1;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id)arg2;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (void)_addDirtyProperty:(id)arg1;
- (BOOL)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (void)_removeReference:(id)arg1 forKey:(id)arg2;
- (void)_addReference:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldRetainPropertyForKey:(id)arg1;
- (void)_setDefaultPropertiesLoaded:(BOOL)arg1;
- (id)_relationForKey:(id)arg1;
- (void)changed;
- (id)_loadedPropertyKeys;
- (void)_releaseLoadedProperties;
- (void)_clearWeakRelations;
- (void)_clearReferences;
- (void)unloadPropertyForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)saved;
- (BOOL)pushDirtyProperties:(id*)arg1;
- (BOOL)_isPendingUpdate;
- (BOOL)_isPendingDelete;
- (void)_takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2;
- (void)takeValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)_isPendingInsert;
- (id)eventStore;
- (void)_setPendingDelete:(BOOL)arg1;
- (void)_setPendingUpdate:(BOOL)arg1;
- (void)_setPendingInsert:(BOOL)arg1;
- (BOOL)isNew;
- (void)_setEventStore:(id)arg1;
- (int)entityType;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (int)primitiveIntValueForKey:(id)arg1;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveURLValueForKey:(id)arg1;
- (id)primitiveStringValueForKey:(id)arg1;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (void)rollback;
- (void)reset;
- (id)objectID;
- (BOOL)isPropertyDirty:(id)arg1;
- (id)dirtyProperties;
- (void)_setObjectID:(id)arg1;
- (BOOL)isDirty;
- (BOOL)refresh;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initCommon;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (id)dump;

@end
