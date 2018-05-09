//
//  AppDelegate.h
//  FacebookLoginTest
//
//  Created by Prathma Rastogi on 09/05/18.
//  Copyright © 2018 Prathma Rastogi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

