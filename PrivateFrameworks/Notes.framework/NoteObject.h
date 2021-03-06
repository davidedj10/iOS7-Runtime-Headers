/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSDate, NSNumber, NoteBodyObject, NoteStoreObject, NSURL, NSString, NSData;

@interface NoteObject : NSManagedObject  {
}

@property(retain) NSNumber * externalFlags;
@property(retain) NSNumber * externalServerIntId;
@property(retain) NSNumber * deletedFlag;
@property(retain) NSNumber * externalSequenceNumber;
@property(retain) NSString * summary;
@property(retain) NSString * author;
@property(retain) NSDate * modificationDate;
@property(retain) NSDate * creationDate;
@property(retain) NSString * title;
@property(retain) NSNumber * contentType;
@property(retain) NSNumber * containsCJK;
@property(retain) NoteBodyObject * body;
@property(retain) NoteStoreObject * store;
@property(retain) NSNumber * integerId;
@property(retain) NSString * content;
@property(readonly) NSString * contentAsPlainText;
@property BOOL isPlainText;
@property(readonly) NSURL * noteId;
@property(readonly) BOOL isMarkedForDeletion;
@property(retain) NSNumber * isBookkeepingEntry;
@property(retain) NSString * serverId;
@property(readonly) BOOL hasValidServerIntId;
@property long long serverIntId;
@property(retain) NSString * guid;
@property unsigned long long flags;
@property(retain) NSData * externalRepresentation;
@property(retain) NSString * externalContentRef;
@property unsigned long long sequenceNumber;


- (BOOL)hasValidServerIntId;
- (void)setServerIntId:(long long)arg1;
- (id)noteId;
- (void)setExternalContentRef:(id)arg1;
- (id)externalContentRef;
- (void)setExternalRepresentation:(id)arg1;
- (id)externalRepresentation;
- (id)contentAsPlainTextPreservingNewlines;
- (BOOL)isPlainText;
- (long long)serverIntId;
- (id)contentAsPlainText;
- (void)setIsPlainText:(BOOL)arg1;
- (BOOL)isMarkedForDeletion;
- (void)markForDeletion;
- (unsigned long long)sequenceNumber;
- (BOOL)containsAttachments;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (unsigned long long)flags;

@end
