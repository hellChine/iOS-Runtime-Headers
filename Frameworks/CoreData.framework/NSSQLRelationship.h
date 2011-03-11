/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLRelationship, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty  {
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}


- (void)dealloc;
- (id)sourceEntity;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)correlationTableName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setInverseRelationship:(id)arg1;
- (id)foreignKey;
- (id)relationshipDescription;
- (id)inverseRelationship;
- (id)destinationEntity;

@end