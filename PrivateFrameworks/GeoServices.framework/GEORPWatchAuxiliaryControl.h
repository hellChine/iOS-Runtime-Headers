/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
}

@property(retain) NSString * hardwareIdentifier;
@property(readonly) BOOL hasHardwareIdentifier;
@property(readonly) BOOL hasOsBuild;
@property(readonly) BOOL hasOsVersion;
@property(retain) NSString * osBuild;
@property(retain) NSString * osVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareIdentifier;
- (BOOL)hasHardwareIdentifier;
- (BOOL)hasOsBuild;
- (BOOL)hasOsVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osBuild;
- (id)osVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end