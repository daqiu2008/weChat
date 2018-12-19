//
//  AppDelegate.h
//  weChat
//
//  Created by daqiu2016 on 2018/12/20.
//  Copyright © 2018年 Grea Space. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

