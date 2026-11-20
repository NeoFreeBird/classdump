//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterRecurringTaskRegistrationCollection_h
#define TFSTwitterRecurringTaskRegistrationCollection_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface TFSTwitterRecurringTaskRegistrationCollection : NSObject {
    /* instance variables */
    NSMutableDictionary *_taskInfos;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addTask:(id)task withSources:(id)sources;
- (void)stopObservingSourcesForTask:(id)task;
- (void)startObservingSourcesForTask:(id)task trigger:(id /* block */)trigger;
- (void)deferObservingSourcesForTask:(id)task;
- (void)deferAlternativeEventSourcesForTask:(id)task source:(id)source;
- (void)removeTask:(id)task;
- (void)removeAllTasks;
- (_Bool)containsTask:(id)task;
- (_Bool)handleEventObservedFromSource:(id)source forTask:(id)task shouldKeepObserving:(_Bool)observing;
- (id)allTasks;

@end

#endif /* TFSTwitterRecurringTaskRegistrationCollection_h */
