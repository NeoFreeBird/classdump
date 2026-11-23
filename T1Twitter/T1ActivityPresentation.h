//
#ifndef T1ActivityPresentation_h
#define T1ActivityPresentation_h
@import Foundation;

@class NSObject;

@interface T1ActivityPresentation : NSObject

/* class methods */
+ (id)prepareActivityImageForActionPresentation:(id)presentation;
+ (id)prepareActivityImageForActionPresentation:(id)presentation presentationMode:(long long)mode;
+ (id)prepareActivityImageForApplicationPresentation:(id)presentation;

@end

#endif /* T1ActivityPresentation_h */
