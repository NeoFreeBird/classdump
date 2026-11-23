//
#ifndef T1NavigationMetadataTracker_h
#define T1NavigationMetadataTracker_h
@import Foundation;

@class NSMapTable, NSObject;

@interface T1NavigationMetadataTracker : NSObject

@property (retain, nonatomic) NSMapTable *sourceNavigationMetadataMap;
@property (retain, nonatomic) NSMapTable *sourceScribeContextMap;

/* class methods */
+ (id)sharedTracker;

/* instance methods */
- (id)init;
- (id)sourceNavigationMetadataForViewController:(id)controller;
- (void)setSourceNavigationMetadata:(id)metadata forViewController:(id)controller;
- (void)setCurrentViewControllerNavigationMetadata:(id)metadata;
- (id)sourceScribeContextForViewController:(id)controller;
- (void)setSourceScribeContext:(id)context forViewController:(id)controller;
- (void)setCurrentViewControllerSourceScribeContext:(id)context;

@end

#endif /* T1NavigationMetadataTracker_h */
