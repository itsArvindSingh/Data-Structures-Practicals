<!-- README.md -->
<!DOCTYPE html>
<html>
<head>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            color: #e0e0e0;
            padding: 20px;
            max-width: 1200px;
            margin: 0 auto;
            background: #0a0e1a;
        }
        .mu-header {
            background: linear-gradient(135deg, #0d1b2a 0%, #1b3a5c 50%, #1a3a5c 100%);
            padding: 30px 20px;
            border-radius: 12px;
            text-align: center;
            color: white;
            margin-bottom: 25px;
            box-shadow: 0 4px 20px rgba(26, 58, 92, 0.5);
            border: 1px solid #2a4a6a;
        }
        .mu-header img {
            width: 220px;
            background: white;
            padding: 10px 20px;
            border-radius: 10px;
            margin-bottom: 15px;
        }
        .mu-header h1 {
            font-size: 2.2em;
            margin: 10px 0 5px;
            letter-spacing: 1px;
            color: #7ec8e3;
            text-shadow: 0 0 20px rgba(126, 200, 227, 0.2);
        }
        .mu-header h3 {
            font-weight: 400;
            opacity: 0.9;
            font-size: 1.1em;
            color: #b0d4e8;
        }
        .badge-container {
            text-align: center;
            margin: 15px 0 25px;
        }
        .badge-container img {
            margin: 3px;
        }
        .mu-badge {
            display: inline-block;
            background: #1b3a5c;
            color: #7ec8e3;
            padding: 4px 14px;
            border-radius: 20px;
            font-size: 0.85em;
            margin: 3px;
            border: 1px solid #2a5a7a;
        }
        h2 {
            color: #7ec8e3;
            border-bottom: 3px solid #1b3a5c;
            padding-bottom: 8px;
            margin: 30px 0 15px;
            font-size: 1.6em;
            text-shadow: 0 0 15px rgba(126, 200, 227, 0.1);
        }
        h3 {
            color: #7ec8e3;
            margin: 20px 0 10px;
            font-size: 1.2em;
        }
        .about-box {
            background: #111927;
            border-left: 5px solid #2a6a8a;
            padding: 18px 22px;
            border-radius: 8px;
            box-shadow: 0 2px 12px rgba(0,0,0,0.3);
            margin: 10px 0 20px;
            border: 1px solid #1b3a5c;
        }
        .about-box p {
            margin: 8px 0;
            color: #c8d8e8;
        }
        .highlight-box {
            background: #111927;
            padding: 15px 20px;
            border-radius: 8px;
            border: 1px solid #1b3a5c;
            margin: 15px 0;
            box-shadow: 0 2px 8px rgba(0,0,0,0.2);
        }
        .highlight-box li {
            color: #c8d8e8;
        }
        .code-block {
            background: #0d1520;
            color: #d4d4d4;
            padding: 18px;
            border-radius: 8px;
            overflow-x: auto;
            font-family: 'Consolas', 'Courier New', monospace;
            font-size: 0.9em;
            margin: 10px 0 20px;
            border: 1px solid #1b3a5c;
            box-shadow: inset 0 0 20px rgba(0,0,0,0.3);
        }
        .code-block .comment {
            color: #5a8a6a;
        }
        .code-block .keyword {
            color: #569cd6;
        }
        .code-block .string {
            color: #ce9178;
        }
        .code-block .number {
            color: #b5cea8;
        }
        .code-block .func {
            color: #dcdcaa;
        }
        .code-block .control {
            color: #c586c0;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin: 15px 0 25px;
            font-size: 0.95em;
            box-shadow: 0 2px 12px rgba(0,0,0,0.3);
            border-radius: 8px;
            overflow: hidden;
        }
        table th {
            background: linear-gradient(135deg, #0d1b2a, #1b3a5c);
            color: #7ec8e3;
            padding: 12px 15px;
            text-align: left;
            font-weight: 600;
            border-bottom: 2px solid #2a5a7a;
        }
        table td {
            padding: 10px 15px;
            border-bottom: 1px solid #1b2a3a;
            background: #111927;
            color: #c8d8e8;
        }
        table tr:hover td {
            background: #1a2a3a;
        }
        .ref-list {
            background: #111927;
            padding: 15px 22px;
            border-radius: 8px;
            border: 1px solid #1b3a5c;
            margin: 10px 0 20px;
        }
        .ref-list li {
            margin: 6px 0;
            list-style-type: square;
            color: #7ec8e3;
        }
        .ref-list li span {
            color: #c8d8e8;
        }
        .ref-list li a {
            color: #7ec8e3;
            text-decoration: none;
        }
        .ref-list li a:hover {
            color: #a0d8f0;
            text-decoration: underline;
        }
        .footer {
            text-align: center;
            padding: 25px 20px;
            background: linear-gradient(135deg, #0d1b2a, #111927);
            border-radius: 12px;
            margin-top: 35px;
            border-top: 3px solid #1b3a5c;
            border: 1px solid #1b3a5c;
        }
        .footer img {
            width: 140px;
            background: white;
            padding: 8px 16px;
            border-radius: 8px;
            margin-top: 12px;
        }
        .footer .heart {
            color: #ff6b6b;
        }
        @media (max-width: 768px) {
            .mu-header h1 {
                font-size: 1.6em;
            }
            table {
                font-size: 0.85em;
            }
            table th, table td {
                padding: 6px 10px;
            }
        }
        .toc {
            background: #111927;
            padding: 15px 22px;
            border-radius: 8px;
            border: 1px solid #1b3a5c;
            display: inline-block;
            margin: 10px 0 20px;
        }
        .toc a {
            color: #7ec8e3;
            text-decoration: none;
            margin: 0 10px;
        }
        .toc a:hover {
            color: #a0d8f0;
            text-decoration: underline;
        }
        hr {
            border: none;
            height: 1px;
            background: linear-gradient(to right, transparent, #1b3a5c, transparent);
            margin: 25px 0;
        }
        .about-table {
            background: transparent;
            box-shadow: none;
            margin: 0;
        }
        .about-table td {
            background: transparent;
            border: none;
            padding: 6px 15px 6px 0;
            color: #c8d8e8;
        }
        .about-table td strong {
            color: #7ec8e3;
        }
        .about-table a {
            color: #7ec8e3;
            text-decoration: none;
        }
        .about-table a:hover {
            color: #a0d8f0;
            text-decoration: underline;
        }
        .highlight-enroll {
            background: #1b3a5c;
            padding: 2px 10px;
            border-radius: 4px;
            color: #7ec8e3;
            font-weight: bold;
            border: 1px solid #2a5a7a;
        }
    </style>
</head>
<body>

<!-- ===== MARWADI UNIVERSITY HEADER ===== -->
<div class="mu-header">
    <img src="https://www.marwadiuniversity.ac.in/wp-content/themes/marwadi-university/assets/img/mu-logo.svg" alt="Marwadi University Logo"/>
    <h1>📚 Data Structures Practicals</h1>
    <h3>BTech CSE (AIML) · 3rd Semester · Marwadi University, Rajkot</h3>
    <p style="margin-top:12px;">
        <span class="mu-badge">🏛️ Marwadi University</span>
        <span class="mu-badge">💻 C Language</span>
        <span class="mu-badge">📅 2026</span>
        <span class="mu-badge">📖 Course Code: 01AI0304</span>
    </p>
</div>

<!-- ===== BADGES ===== -->
<div class="badge-container">
    <img src="https://img.shields.io/badge/Language-C-4a90d9.svg?style=flat&logo=c" alt="C Language"/>
    <img src="https://img.shields.io/badge/University-Marwadi%20University-1b3a5c.svg?style=flat" alt="Marwadi University"/>
    <img src="https://img.shields.io/badge/Semester-3rd-4a90d9.svg?style=flat" alt="Semester 3"/>
    <img src="https://img.shields.io/badge/Program-BTech%20CSE%20(AIML)-2a6a8a.svg?style=flat" alt="BTech CSE AIML"/>
    <img src="https://img.shields.io/badge/Course%20Code-01AI0304-5a8aaa.svg?style=flat" alt="Course Code"/>
    <img src="https://img.shields.io/badge/License-MIT-4a90d9.svg?style=flat" alt="License MIT"/>
    <img src="https://img.shields.io/badge/Made%20with-%E2%9D%A4%EF%B8%8F-ff6b6b.svg?style=flat" alt="Made with love"/>
</div>

<!-- ===== TABLE OF CONTENTS ===== -->
<div class="toc">
    📌 <a href="#description">Description</a> ·
    <a href="#objectives">Objectives</a> ·
    <a href="#outcomes">Outcomes</a> ·
    <a href="#practicals">Practicals</a> ·
    <a href="#about">About</a>
</div>

<hr/>

<!-- ===== DESCRIPTION ===== -->
<h2 id="description">📖 Description</h2>
<div class="about-box">
    <p>This repository contains all the practical assignments and coding implementations I completed during my <strong style="color:#7ec8e3;">Data Structures</strong> course (<strong style="color:#7ec8e3;">01AI0304</strong>) in the <strong style="color:#7ec8e3;">3rd semester</strong> of my <strong style="color:#7ec8e3;">BTech CSE (AIML)</strong> program at <strong style="color:#7ec8e3;">Marwadi University</strong>, Rajkot.</p>
    <p>All programs are written in <strong style="color:#7ec8e3;">C language</strong> and cover fundamental data structures concepts including arrays, sorting, searching, stacks, queues, linked lists, trees, graphs, and hashing as per the university syllabus.</p>
</div>

<!-- ===== OBJECTIVES ===== -->
<h2 id="objectives">🎯 Course Objectives</h2>
<div class="highlight-box">
    <ol style="padding-left:22px; margin:5px 0;">
        <li>To understand different data structures and algorithms.</li>
        <li>To solve problems using data structures such as linear lists, stacks, queues, binary trees, and graphs and writing programs for these solutions.</li>
        <li>To efficiently implement the different data structures and solutions for specific problems.</li>
    </ol>
</div>

<!-- ===== COURSE OUTCOMES ===== -->
<h2 id="outcomes">✅ Course Outcomes</h2>
<div class="highlight-box">
    <p style="color:#c8d8e8;">After completion of this course, student will be able to:</p>
    <ol style="padding-left:22px; margin:8px 0;">
        <li><strong style="color:#7ec8e3;">Understand</strong> — Learn the different types of data structures, operations on them and applications.</li>
        <li><strong style="color:#7ec8e3;">Apply</strong> — Choose the appropriate data structure and algorithm for a specified application.</li>
        <li><strong style="color:#7ec8e3;">Analyse</strong> — Analyse various sorting and searching techniques with applications.</li>
        <li><strong style="color:#7ec8e3;">Create</strong> — Implement linear data structures such as stacks, queues, linked lists and their applications.</li>
        <li><strong style="color:#7ec8e3;">Create</strong> — Implement non-linear data structures such as trees, graphs and their applications.</li>
    </ol>
</div>

<!-- ===== PRACTICALS ===== -->
<h2 id="practicals">🧪 List of Practicals</h2>
<table>
    <tr>
        <th>#</th>
        <th>Practical</th>
        <th>Description</th>
        <th>Hours</th>
    </tr>
    <tr>
        <td>1</td>
        <td>Array Operations</td>
        <td>Write a program that implement array operations: Insertion, Deletion, Traversal</td>
        <td>2</td>
    </tr>
    <tr>
        <td>2</td>
        <td>Bubble, Insertion & Selection Sort</td>
        <td>Write a program that implements Bubble sort, Insertion sort, Selection sort</td>
        <td>2</td>
    </tr>
    <tr>
        <td>3</td>
        <td>Quick Sort & Merge Sort</td>
        <td>Write a program that implements Quick Sort and Merge sort</td>
        <td>2</td>
    </tr>
    <tr>
        <td>4</td>
        <td>Linear & Binary Search</td>
        <td>Write a program for searching an element: Linear search, Binary search</td>
        <td>2</td>
    </tr>
    <tr>
        <td>5</td>
        <td>Stack using Array</td>
        <td>Implement STACK using array: PUSH, POP, Display, isEmpty, isFull</td>
        <td>2</td>
    </tr>
    <tr>
        <td>6</td>
        <td>Queue using Array</td>
        <td>Implement Queue using array: Insert, Delete, Display, isEmpty, isFull</td>
        <td>2</td>
    </tr>
    <tr>
        <td>7</td>
        <td>Singly Linked List</td>
        <td>Implement Singly Linked List: Create, Insert, Delete, Display</td>
        <td>2</td>
    </tr>
    <tr>
        <td>8</td>
        <td>Doubly Linked List</td>
        <td>Implement Doubly Linked List: Create, Insert, Delete, Display</td>
        <td>2</td>
    </tr>
    <tr>
        <td>9</td>
        <td>Circular Linked List</td>
        <td>Implement Circular Linked List: Create, Insert, Delete, Display</td>
        <td>2</td>
    </tr>
    <tr>
        <td>10</td>
        <td>Binary Tree Traversals</td>
        <td>Implement Binary Tree: Inorder, Preorder, Postorder Traversal</td>
        <td>2</td>
    </tr>
    <tr>
        <td>11</td>
        <td>Binary Search Tree</td>
        <td>Implement BST: Insertion, Deletion, Searching, Traversals</td>
        <td>2</td>
    </tr>
    <tr>
        <td>12</td>
        <td>Graph Traversals (BFS & DFS)</td>
        <td>Implement Graph: BFS & DFS Traversal Techniques</td>
        <td>2</td>
    </tr>
</table>

<!-- ===== SAMPLE CODE ===== -->
<h2>📝 Sample Code (Practical 1: Array Operations)</h2>
<div class="code-block">
<span class="comment">// Menu driven program for array operations</span><br/>
<span class="keyword">#include</span> &lt;stdio.h&gt;<br/><br/>
<span class="keyword">int</span> main() {<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">int</span> arr[<span class="number">100</span>], n, choice, pos, val, i;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">do</span> {<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printf(<span class="string">"1.Traverse\n2.Insert\n3.Delete\n4.Exit\n"</span>);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;scanf(<span class="string">"%d"</span>, &amp;choice);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">switch</span>(choice) {<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">case</span> <span class="number">1</span>: <span class="comment">// Traverse</span><br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">for</span>(i=<span class="number">0</span>; i&lt;n; i++) printf(<span class="string">"%d "</span>, arr[i]);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">break</span>;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">case</span> <span class="number">2</span>: <span class="comment">// Insert</span><br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printf(<span class="string">"Enter position and value: "</span>);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;scanf(<span class="string">"%d %d"</span>, &amp;pos, &amp;val);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">for</span>(i=n; i&gt;pos; i--) arr[i]=arr[i-<span class="number">1</span>];<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;arr[pos]=val; n++; <span class="keyword">break</span>;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">case</span> <span class="number">3</span>: <span class="comment">// Delete</span><br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printf(<span class="string">"Enter position: "</span>);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;scanf(<span class="string">"%d"</span>, &amp;pos);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">for</span>(i=pos; i&lt;n-<span class="number">1</span>; i++) arr[i]=arr[i+<span class="number">1</span>];<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;n--; <span class="keyword">break</span>;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">case</span> <span class="number">4</span>: printf(<span class="string">"Exiting...\n"</span>); <span class="keyword">break</span>;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">default</span>: printf(<span class="string">"Invalid choice!\n"</span>);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}<br/>
&nbsp;&nbsp;&nbsp;&nbsp;} <span class="keyword">while</span> (choice != <span class="number">4</span>);<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<span class="keyword">return</span> <span class="number">0</span>;<br/>
}
</div>

<!-- ===== REFERENCES ===== -->
<h2>📚 Reference</h2>
<ul class="ref-list">
    <li><span>Data Structures using C & C++, Tanenbaum, PHI, 2012</span></li>
</ul>

<!-- ===== SUPPLEMENTARY RESOURCES ===== -->
<h2>🔗 Supplementary Resources</h2>
<ul class="ref-list">
    <li><span><a href="https://visualgo.net/en" target="_blank">https://visualgo.net/en</a> — Visualization of data structures & algorithms</span></li>
    <li><span><a href="https://www.cs.usfca.edu/~galles/visualization/Algorithms.html" target="_blank">https://www.cs.usfca.edu/~galles/visualization/Algorithms.html</a> — Algorithm visualizations</span></li>
    <li><span><a href="https://quizlet.com" target="_blank">https://quizlet.com</a> — Study tools & flashcards</span></li>
</ul>

<!-- ===== ABOUT ME ===== -->
<h2 id="about">👨‍💻 About Me</h2>
<div style="background:#111927; border-left:5px solid #2a6a8a; padding:18px 22px; border-radius:8px; border:1px solid #1b3a5c;">
    <table class="about-table">
        <tr><td><strong>👤 Name</strong></td><td>Arvind Singh</td></tr>
        <tr><td><strong>🏛️ University</strong></td><td>Marwadi University, Rajkot</td></tr>
        <tr><td><strong>📚 Program</strong></td><td>BTech Computer Science & Engineering (AIML)</td></tr>
        <tr><td><strong>🐙 GitHub</strong></td><td><a href="https://github.com/itsArvindSingh">itsArvindSingh</a></td></tr>
    </table>
</div>

<!-- ===== FOOTER ===== -->
<div class="footer">
    <h2 style="border:none; color:#7ec8e3; margin:0 0 10px;">📄 License</h2>
    <p style="color:#c8d8e8;">This project is licensed under the <strong style="color:#7ec8e3;">MIT License</strong>.</p>
    <p style="font-size:1.2em; margin:12px 0;">
        ⭐ If you find this repository useful, please consider giving it a star! ⭐
    </p>
    <p style="color:#8aa8b8;">
        <strong>Made with <span class="heart">❤️</span> by Arvind Singh</strong><br/>
        <small>© 2026 Marwadi University — All Rights Reserved</small>
    </p>
    <img src="https://www.marwadiuniversity.ac.in/wp-content/themes/marwadi-university/assets/img/mu-logo.svg" alt="Marwadi University Logo"/>
</div>

</body>
</html>