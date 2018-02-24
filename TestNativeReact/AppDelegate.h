//
//  AppDelegate.h
//  TestNativeReact
//
//  Created by Hutong on 24/02/2018.
//  Copyright © 2018 Hutong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

