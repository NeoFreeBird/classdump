//
#ifndef PTVWatchCellImageLoader_h
#define PTVWatchCellImageLoader_h
@import Foundation;

#include "PTVImageLoader.h"

@class NSTimer;

@interface PTVWatchCellImageLoader : PTVImageLoader {
    /* instance variables */
    PTVWatchCellImageLoader *_weakSelf;
}

@property (nonatomic) long long nAttempts;
@property (retain, nonatomic) NSTimer *refreshTimer;
@property (nonatomic) _Bool shouldUpdateThumbnails;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)willChangeSourceTo:(id)to;
- (void)didChangeStateFrom:(long long)from;
- (void)refreshWithTimeInterval:(double)interval;
- (void)stopRefreshing;
- (void)refresh;

@end

#endif /* PTVWatchCellImageLoader_h */
