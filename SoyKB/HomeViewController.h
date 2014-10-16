//
//  HomeViewController.h
//  SoyKB
//
//  Created by digbio lab on 10/15/14.
//  Copyright (c) 2014 SoyKBDevelopment. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *geneID;
@property (nonatomic,strong) NSMutableArray * jsonArray;
/*@property (weak, nonatomic) IBOutlet UITableView *tableView;*/


- (IBAction)searchClicked:(id)sender;
- (IBAction)logoutClicked:(id)sender;
- (IBAction)backgroundTap:(id)sender;

@end
