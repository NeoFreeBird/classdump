//
#ifndef TFNDropSessionHelper_h
#define TFNDropSessionHelper_h
@import Foundation;

@class NSObject;

@interface TFNDropSessionHelper : NSObject

/* class methods */
+ (id)_tfn_localItemProviderForSession:(id)session;
+ (_Bool)localItemProviderForSession:(id)session hasItemConformingToTypeIdentifier:(id)identifier;
+ (_Bool)dropSession:(id)session hasItemsConformingOnlyToTypeIdentifiers:(id)identifiers;

@end

#endif /* TFNDropSessionHelper_h */
