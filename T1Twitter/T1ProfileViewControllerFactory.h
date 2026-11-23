//
#ifndef T1ProfileViewControllerFactory_h
#define T1ProfileViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1ProfileViewControllerFactory : NSObject

/* class methods */
+ (id)profileViewControllerForUser:(id)user account:(id)account sourceNavigationMetadata:(id)metadata;
+ (id)profileViewControllerForUserDataSource:(id)source context:(id)context account:(id)account sourceNavigationMetadata:(id)metadata;
+ (id)profileViewControllerForUserDataSource:(id)source context:(id)context account:(id)account sourceNavigationMetadata:(id)metadata sourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect displayOptions:(long long)options;
+ (id)profileViewControllerForUserReference:(id)reference account:(id)account sourceNavigationMetadata:(id)metadata;
+ (id)profileViewControllerForUserReference:(id)reference account:(id)account sourceNavigationMetadata:(id)metadata sourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect displayOptions:(long long)options;
+ (id)editableProfileViewControllerForAccount:(id)account sourceNavigationMetadata:(id)metadata;

@end

#endif /* T1ProfileViewControllerFactory_h */
