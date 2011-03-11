/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray  {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}


- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)finalize;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)release;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (unsigned int)count;
- (void)addObject:(id)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithPFArray:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithPFArray:(id)arg1;
- (void)_rehash;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;

@end