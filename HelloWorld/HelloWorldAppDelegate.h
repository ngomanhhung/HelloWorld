//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Developer on 27/10/12.
//  Copyright (c) 2012 Developer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
