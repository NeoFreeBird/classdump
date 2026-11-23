//
#ifndef TGIFilterLibraryCache_h
#define TGIFilterLibraryCache_h
@import Foundation;

@class NSArray, NSCache, NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TGIFilterLibraryCache : NSObject {
    /* instance variables */
    NSMapTable *_weakMap;
    NSCache *_strongCache;
    NSMutableArray *_constructors;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (copy, nonatomic) NSArray *filtersSortOrder;

/* instance methods */
- (id)init;
- (void)registerFilterLibraryConstructor:(id /* block */)constructor;
- (id)libraryWithName:(id)name;

@end

#endif /* TGIFilterLibraryCache_h */
