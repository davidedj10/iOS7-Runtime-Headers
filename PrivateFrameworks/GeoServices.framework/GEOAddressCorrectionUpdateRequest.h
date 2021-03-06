/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {
    NSString *_addressID;
    int _correctionStatus;
    NSMutableArray *_significantLocations;
    struct { 
        unsigned int correctionStatus : 1; 
    } _has;
}

@property BOOL hasCorrectionStatus;
@property int correctionStatus;
@property(retain) NSMutableArray * significantLocations;
@property(readonly) BOOL hasAddressID;
@property(retain) NSString * addressID;


- (id)significantLocations;
- (void)setHasCorrectionStatus:(BOOL)arg1;
- (id)addressID;
- (BOOL)hasAddressID;
- (id)significantLocationAtIndex:(unsigned int)arg1;
- (void)clearSignificantLocations;
- (unsigned int)significantLocationsCount;
- (void)setCorrectionStatus:(int)arg1;
- (int)correctionStatus;
- (BOOL)hasCorrectionStatus;
- (void)addSignificantLocation:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setSignificantLocations:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
