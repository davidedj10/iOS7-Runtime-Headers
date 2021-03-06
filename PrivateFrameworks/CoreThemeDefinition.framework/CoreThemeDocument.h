/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class TDHistorian, NSMutableDictionary, <TDAssetManagementDelegate>, NSString, TDThreadMOCOrganizer, NSURL, NSManagedObjectModel;

@interface CoreThemeDocument : TDPersistentDocument  {
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    int cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *pathToRepresentedDocument;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    BOOL m_didMigrate;
    int _updateVersionMetadataState;
    <TDAssetManagementDelegate> *_assetManagementDelegate;
}

@property(copy) NSString * pathToRepresentedDocument;
@property <TDAssetManagementDelegate> * assetManagementDelegate;
@property(readonly) NSURL * themeBitSourceURL;

+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id*)arg2;
+ (void)_addThemeDocument:(id)arg1;
+ (void)doneWithColorConversion;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned int)arg1 toIdentifier:(unsigned int)arg2 error:(id*)arg3;
+ (unsigned int)standardColorSpaceID;
+ (int)platformForPersistentString:(id)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id*)arg3;
+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)closeMigrationProgress;
+ (void)presentMigrationProgress;
+ (int)dataModelVersion;
+ (int)dataModelVersionFromMetadata:(id)arg1;
+ (id)persistentStringForPlatform:(int)arg1;
+ (int)defaultTargetPlatform;
+ (id)_sharedDocumentList;
+ (id)dataModelNameForVersion:(int)arg1;
+ (int)targetPlatformForMOC:(id)arg1;

- (void)setAssetManagementDelegate:(id)arg1;
- (void)setPathToRepresentedDocument:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (id)themeBitSourceURL;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id*)arg2 getUnupdatedCursors:(id*)arg3;
- (void)exportCursorsToURL:(id)arg1;
- (void)importColorsFromURL:(id)arg1 valuesOnly:(BOOL)arg2 getUnusedColorNames:(id*)arg3;
- (void)exportColorsToURL:(id)arg1;
- (id)namedEffectProductions;
- (id)namedArtworkProductions;
- (id)schemaPartDefinitionWithElementID:(int)arg1 partID:(int)arg2;
- (BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id*)arg3;
- (BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id*)arg4;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (id)customizedSchemaEffectDefinitions;
- (int)renditionKeySpecAttributeCount;
- (BOOL)didMigrate;
- (unsigned int)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (unsigned int)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (id)pathToAsset:(id)arg1;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)_genericPartDefinition;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(id)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 completionHandler:(id)arg2;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(id)arg3;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2;
- (id)zeroCodeArtworkInfoWithIdentifier:(int)arg1;
- (id)psdImageRefForAsset:(id)arg1;
- (id)constantWithName:(id)arg1 forIdentifier:(int)arg2;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (void)recacheThemeConstant:(id)arg1;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id*)arg1;
- (id)updateToSchemaVersion4AndReturnAlertString:(id*)arg1;
- (id)updateToSchemaVersion3AndReturnAlertString:(id*)arg1;
- (id)migrateFromWindowFormat14ToWindowFormat15:(id*)arg1;
- (void)checkVersionsAndUpdateIfNecessary;
- (id)initWithType:(id)arg1 targetPlatform:(int)arg2 error:(id*)arg3;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2;
- (void)setRelativePathToProductionData:(id)arg1;
- (void)setArtworkFormat:(id)arg1;
- (void)setTargetPlatform:(int)arg1;
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned int)arg1 toIdentifier:(unsigned int)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id*)arg4;
- (BOOL)customizationExistsForSchemaDefinition:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (int)renditionKeySemantics;
- (id)schemaCategoryWithIdentifier:(int)arg1;
- (id)lookWithIdentifier:(int)arg1;
- (void)resetThemeConstants;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (id)relativePathToProductionData;
- (id)pathToRepresentedDocument;
- (id)createElementProductionWithAsset:(id)arg1;
- (void)_getFilename:(id*)arg1 scaleFactor:(unsigned int*)arg2 category:(id*)arg3 bitSource:(id*)arg4 forFileURL:(id)arg5;
- (id)assetAtFileURL:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id*)arg6;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(id)arg3;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id*)arg3;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)idiomWithIdentifier:(int)arg1;
- (id)_namedImagePartDefinition;
- (id)_createNamedElementWithIdentifier:(int)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)mappingForPhotoshopLayerIndex:(int)arg1 themeDrawingLayerIdentifier:(int)arg2;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id*)arg3;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id*)arg4;
- (id)_themeBitSource:(id*)arg1;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (id)renditionTypeWithIdentifier:(int)arg1;
- (id)artworkDraftTypeWithIdentifier:(int)arg1;
- (BOOL)shouldGeneratePSDAssetFromArtFile:(id)arg1;
- (id)handCraftedAssetURLForFileName:(id)arg1;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (int)targetPlatform;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (id)mocOrganizer;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id*)arg3;
- (unsigned int)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)newObjectForEntity:(id)arg1;
- (id)themeConstant:(id)arg1 withIdentifier:(int)arg2;
- (id)_cachedConstantsForEntity:(id)arg1;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedTextEffectPartDefinition;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id*)arg5;
- (id)artworkFormat;
- (id)schemaDefinitionWithElementID:(int)arg1;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (id)customizedSchemaElementDefinitions;
- (void)_configureAfterFirstSave;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)buildModel;
- (id)initWithType:(id)arg1 error:(id*)arg2;
- (void)changedObjectsNotification:(id)arg1;
- (void)primeArrayControllers;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (BOOL)isCustomLook;
- (id)metadatumForKey:(id)arg1;
- (id)historian;
- (id)directionWithIdentifier:(int)arg1;
- (id)sizeWithIdentifier:(int)arg1;
- (id)partWithIdentifier:(int)arg1;
- (id)elementWithIdentifier:(int)arg1;
- (id)assetManagementDelegate;
- (void)deleteObjects:(id)arg1;
- (id)drawingLayerWithIdentifier:(int)arg1;
- (id)presentationStateWithIdentifier:(int)arg1;
- (id)valueWithIdentifier:(int)arg1;
- (id)rootPathForProductionData;
- (id)stateWithIdentifier:(int)arg1;
- (unsigned int)checksum;
- (void)deleteObject:(id)arg1;
- (id)managedObjectModel;
- (id)uuid;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)renditionKeyFormat;
- (BOOL)usesCUISystemThemeRenditionKey;
- (unsigned int)colorSpaceID;
- (id)init;
- (void)setUuid:(id)arg1;
- (void)dealloc;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (id)persistentStoreTypeForFileType:(id)arg1;

@end
