//
//  TLShortcutMethod.h
//  Pods
//
//  Created by 李伯坤 on 2017/9/7.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>

UILabel *createLabel(UIFont *textFont, UIColor *textColor);

UIButton *createButton(UIFont *titleFont, UIColor *titleColor, id target, SEL touchUpInsideAction);
/**
 * 为ViewController添加navController
 */
UINavigationController *addNavigationController(UIViewController *viewController);

/**
 * 初始化tabBarItem
 */
void initTabBarItem(UITabBarItem *tabBarItem, NSString *tilte, NSString *image, NSString *imageHL);
