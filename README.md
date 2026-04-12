 📌 FarmConnect

📖 Description

FarmConnect is a C++/CLR Windows Forms application designed to connect farmers and buyers in a digital marketplace similar to a farmers' market.

The system allows users to register either as a **farmer** or a **buyer**, and provides a platform where farmers can showcase and sell their produce while buyers can browse, select, and purchase items from multiple vendors.



🎯 Features

### 🔐 User Registration

-> Separate registration for **Farmers** and **Buyers**

**Farmer Registration includes:**

-> Name
-> Surname
-> Cell number
-> Email
-> Farm address
-> Types of produce (multiple items allowed)

**Buyer Registration includes:**

-> Name
-> Surname
-> Cell number
-> Email
-> Address


### 🔎 Search System

-> Search for products by category:

  -> Fruits
  -> Vegetables
  -> Poultry
  -> Seafood
  -> Bakery
  -> Livestock


### 🛒 Marketplace

-> Display vendors based on search results
-> Each vendor shows:

  -> Farm name
  -> Product
  -> Price


### 🧺 Cart & Checkout

-> Add items from different vendors
-> View selected items in cart
-> Checkout and confirm delivery


## 🛠️ Technologies Used

-> C++/CLI
-> Windows Forms
-> SQL Database 
-> .NET Framework


## ⚙️ Installation

1. Clone the repository

```bash
git clone https://github.com/your-username/farmconnect.git
```

2. Open in Visual Studio

3. Build the solution

4. Run the application


## 👥 Team Members & Roles

### 🎨 Front-End (Karabo1, Lesedi)

-> UI Design (Forms)
-> Navigation between pages
-> User input handling

### ⚙️ Back-End (Alfred, Karabo2, Masana)

-> Database design & queries
-> Logic for registration & login
-> Search functionality
-> Cart & checkout system


# 📅 4-Week Development Plan

## ✅ Week 1 – Planning + Setup

**Goal: Foundation done**

-> Design database (tables for users, products, orders)
-> Create project structure in Visual Studio
-> Front-end:

  * Create basic forms (Login, Register selection)
* Back-end:

  -> Setup database connection
  * Create user classes (Farmer & Buyer)


## ✅ Week 2 – Registration System

**Goal: Users can register**

-> Front-end:

  -> Farmer registration form
  -> Buyer registration form
* Back-end:

  -> Store user data in database
  -> Validate inputs
-> Test registration flow

## ✅ Week 3 – Core Features

**Goal: Marketplace working**

-> Front-end:

  -> Search page
  -> Vendor display page
* Back-end:

  -> Implement search functionality
  -> Link farmers to their products
  -> Display results dynamically

---

## ✅ Week 4 – Cart + Final Touches

**Goal: Fully working app**

* Front-end:

  -> Cart page
  -> Checkout page
* Back-end:

  -> Add to cart logic
  -> Checkout processing
* Testing:

  -> Fix bugs
  -> Improve UI
  -> Final demo prep


