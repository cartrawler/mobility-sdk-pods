//
//  UserModel.h
//  SDKDemo
//
//  Created by Flann McMorrow on 13/08/2018.
//  Copyright © 2018 Flann McMorrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CTNUser;

@interface CTNUser : NSObject

@property (strong, nonatomic) NSString *userMobile;
@property (strong, nonatomic) NSString *password;
@property (strong, nonatomic) NSString *firstName;
@property (strong, nonatomic) NSString *lastName;
@property (strong, nonatomic) NSString *email;
@property (strong, nonatomic) NSString *userRegion;
@property (strong, nonatomic) CTNUser *userModel;

- (instancetype)initUser:(NSString *)userMobile
                      password:(NSString *)password
                     firstName:(NSString *)firstName
                      lastName:(NSString *)lastName
                         email:(NSString *)email
                    userRegion:(NSString *)userRegion;
@end
