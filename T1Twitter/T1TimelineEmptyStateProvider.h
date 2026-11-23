//
#ifndef T1TimelineEmptyStateProvider_h
#define T1TimelineEmptyStateProvider_h
@import Foundation;

@class NSMapTable, NSObject;

@interface T1TimelineEmptyStateProvider : NSObject {
    /* instance variables */
    NSMapTable *_customConfigurationsTable;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)setEmptyStateConfiguration:(id)configuration forTimeline:(id)timeline withScribeContext:(id)context;
- (id)emptyStateConfigurationForTimeline:(id)timeline additionalAction:(id /* block */)action;
- (id)scribeContextForTimeline:(id)timeline;

@end

#endif /* T1TimelineEmptyStateProvider_h */
